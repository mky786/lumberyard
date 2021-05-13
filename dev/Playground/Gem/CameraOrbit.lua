local CameraOrbit =
{
	Properties =
	{
		CameraEntity = { default = EntityId(), },
	},
}

function CameraOrbit:OnActivate()
	self.InputChannelNotificationBusHandler = InputChannelNotificationBus.CreateHandler(self)
	self.InputChannelNotificationBusHandler:Connect()
end

function CameraOrbit:OnDeactivate()
	self.InputChannelNotificationBusHandler:Disconnect()
end

function CameraOrbit:OnInputChannelEvent(InputChannel, bool)
	Debug.Log("$5CameraOrbit:OnInputChannelEvent")
	if InputChannel then
		Debug.Log(InputChannel.channelName)
		Debug.Log(InputChannel.value)
		Debug.Log(InputChannel.delta)
		Debug.Log(InputChannel.deviceName)
		Debug.Log(InputChannel.state)
	end
end

return CameraOrbit