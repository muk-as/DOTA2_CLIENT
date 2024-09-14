#pragma once
#include "source2sdk/server/CAnimationLayer.hpp"
#include "source2sdk/server/CBaseAnimatingController.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x520
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CAnimationLayer m_AnimOverlay"
    #pragma pack(push, 1)
    class CBaseAnimatingOverlayController : public server::CBaseAnimatingController
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "overlay_vars"
        // metadata: MNetworkChangeCallback "OnOverlaysChanged2"
        // m_AnimOverlay has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorEmbeddedNetworkVar<server::CAnimationLayer> m_AnimOverlay;
        char m_AnimOverlay[0x50]; // 0x4c8        
        [[maybe_unused]] std::uint8_t pad_0x518[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseAnimatingOverlayController because it is not a standard-layout class
    static_assert(sizeof(CBaseAnimatingOverlayController) == 0x520);
};
