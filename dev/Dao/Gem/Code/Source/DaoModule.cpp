
#include <AzCore/Memory/SystemAllocator.h>
#include <AzCore/Module/Module.h>

#include <DaoSystemComponent.h>

namespace Dao
{
    class DaoModule
        : public AZ::Module
    {
    public:
        AZ_RTTI(DaoModule, "{3BD48843-BEE6-4AD0-93A0-B78BADF7981E}", AZ::Module);
        AZ_CLASS_ALLOCATOR(DaoModule, AZ::SystemAllocator, 0);

        DaoModule()
            : AZ::Module()
        {
            // Push results of [MyComponent]::CreateDescriptor() into m_descriptors here.
            m_descriptors.insert(m_descriptors.end(), {
                DaoSystemComponent::CreateDescriptor(),
            });
        }

        /**
         * Add required SystemComponents to the SystemEntity.
         */
        AZ::ComponentTypeList GetRequiredSystemComponents() const override
        {
            return AZ::ComponentTypeList {
                azrtti_typeid<DaoSystemComponent>(),
            };
        }
    };
}

// DO NOT MODIFY THIS LINE UNLESS YOU RENAME THE GEM
// The first parameter should be GemName_GemIdLower
// The second should be the fully qualified name of the class above
AZ_DECLARE_MODULE_CLASS(Dao_c73598afbef4421f9b9ba99a7a0ad25b, Dao::DaoModule)
