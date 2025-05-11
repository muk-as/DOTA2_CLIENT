#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CAnimationLayer.hpp"
#include "source2sdk/server/CBaseAnimatingController.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x538
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CAnimationLayer m_AnimOverlay"
        #pragma pack(push, 1)
        class CBaseAnimatingOverlayController : public source2sdk::server::CBaseAnimatingController
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "overlay_vars"
            // metadata: MNetworkChangeCallback "OnOverlaysChanged2"
            // m_AnimOverlay has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::CAnimationLayer> m_AnimOverlay;
            char m_AnimOverlay[0x68]; // 0x4c8            
            uint8_t _pad0530[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseAnimatingOverlayController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseAnimatingOverlayController) == 0x538);
    };
};
