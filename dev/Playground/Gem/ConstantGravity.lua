----------------------------------------------------------------------
-- This component is responsible for applying a constant gravity effect
-- on the same entity with a PhysX Character Controller component.
local ConstantGravity =
{
	Properties =
	{
		Speed = { default = 3.0, description = "The constant speed caused by this constant gravity.", suffix = " m/s" },
	},
}

----------------------------------------------------------------------
-- Entity::OnActivate
function ConstantGravity:OnActivate()
	Debug.Log("$5 ConstantGravity:OnActivate()")
	self.tickBusHandler = TickBus.CreateHandler(self)
	self.tickBusHandler:Connect()
end

----------------------------------------------------------------------
-- Entity::OnDeactivate
function ConstantGravity:OnDeactivate()
	self.tickBusHandler:Disconnect()
end

----------------------------------------------------------------------
-- TickBus::OnTick
function ConstantGravity:OnTick(deltaTime, timePoint)
	CharacterControllerRequestBus.Event.TryRelativeMove(self.entityId, Vector3.CreateAxisZ(self.Properties.Speed), deltaTime)
end


return ConstantGravity