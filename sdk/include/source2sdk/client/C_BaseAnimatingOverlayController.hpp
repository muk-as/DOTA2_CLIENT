#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAnimationLayer.hpp"
#include "source2sdk/client/C_BaseAnimatingController.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x670
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CAnimationLayer m_AnimOverlay"
        #pragma pack(push, 1)
        class C_BaseAnimatingOverlayController : public source2sdk::client::C_BaseAnimatingController
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "overlay_vars"
            // metadata: MNetworkChangeCallback "OnOverlaysChanged2"
            // m_AnimOverlay has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::CAnimationLayer> m_AnimOverlay;
            char m_AnimOverlay[0x68]; // 0x5e0            
            uint8_t _pad0648[0x28];
            
            // Datamap fields:
            // void m_iv_AnimOverlay; // 0x648
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BaseAnimatingOverlayController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BaseAnimatingOverlayController) == 0x670);
    };
};
