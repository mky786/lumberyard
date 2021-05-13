
#include <AzCore/Memory/SystemAllocator.h>
#include <AzCore/Module/Module.h>

#include <PlaygroundSystemComponent.h>

namespace Playground
{
    class PlaygroundModule
        : public AZ::Module
    {
    public:
        AZ_RTTI(PlaygroundModule, "{CC3784CE-B8D4-4E81-8B5D-EFBD04BE423D}", AZ::Module);
        AZ_CLASS_ALLOCATOR(PlaygroundModule, AZ::SystemAllocator, 0);

        PlaygroundModule()
            : AZ::Module()
        {
            // Push results of [MyComponent]::CreateDescriptor() into m_descriptors here.
            m_descriptors.insert(m_descriptors.end(), {
                PlaygroundSystemComponent::CreateDescriptor(),
            });
        }

        /**
         * Add required SystemComponents to the SystemEntity.
         */
        AZ::ComponentTypeList GetRequiredSystemComponents() const override
        {
            return AZ::ComponentTypeList {
                azrtti_typeid<PlaygroundSystemComponent>(),
            };
        }
    };
}

// DO NOT MODIFY THIS LINE UNLESS YOU RENAME THE GEM
// The first parameter should be GemName_GemIdLower
// The second should be the fully qualified name of the class above
AZ_DECLARE_MODULE_CLASS(Playground_936a8468785247a5ae8cbec0b99985fe, Playground::PlaygroundModule)
