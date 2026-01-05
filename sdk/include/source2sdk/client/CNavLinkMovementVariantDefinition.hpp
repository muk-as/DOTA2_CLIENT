#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CNavLinkConditions.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCNmGraphDefinition.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNavLinkMovementVariantDefinition
        {
        public:
            // metadata: MPropertyDescription "External nav link animgraph to connect to the NPC when using the navlink"
            // m_sExternalGraphName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCNmGraphDefinition>> m_sExternalGraphName;
            char m_sExternalGraphName[0x_]; // 0x_            
            // m_vecConditions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CNavLinkConditions> m_vecConditions;
            char m_vecConditions[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CNavLinkMovementVariantDefinition, m_sExternalGraphName) == 0x_);
        static_assert(offsetof(source2sdk::client::CNavLinkMovementVariantDefinition, m_vecConditions) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CNavLinkMovementVariantDefinition) == 0x_);
    };
};
