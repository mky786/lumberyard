
#pragma once

#include <AzCore/Component/Component.h>

#include <Dao/DaoBus.h>

namespace Dao
{
    class DaoSystemComponent
        : public AZ::Component
        , protected DaoRequestBus::Handler
    {
    public:
        AZ_COMPONENT(DaoSystemComponent, "{84BA1741-5E72-4D2D-AF3F-3AA842D3526F}");

        static void Reflect(AZ::ReflectContext* context);

        static void GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided);
        static void GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible);
        static void GetRequiredServices(AZ::ComponentDescriptor::DependencyArrayType& required);
        static void GetDependentServices(AZ::ComponentDescriptor::DependencyArrayType& dependent);

    protected:
        ////////////////////////////////////////////////////////////////////////
        // DaoRequestBus interface implementation

        ////////////////////////////////////////////////////////////////////////

        ////////////////////////////////////////////////////////////////////////
        // AZ::Component interface implementation
        void Init() override;
        void Activate() override;
        void Deactivate() override;
        ////////////////////////////////////////////////////////////////////////
    };

} // namespace Dao
