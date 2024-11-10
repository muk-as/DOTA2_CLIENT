#pragma once
#include "source2sdk/client/SceneEventId_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseAnimatingOverlay.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x850
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MNetworkVarNames "float32 m_flexWeight"
    // static metadata: MNetworkVarNames "Vector m_vLookTargetPosition"
    // static metadata: MNetworkVarNames "bool m_blinktoggle"
    #pragma pack(push, 1)
    class CBaseFlex : public server::CBaseAnimatingOverlay
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "12"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "1,000000"
        // metadata: MNetworkEncodeFlags "1"
        // m_flexWeight has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<float> m_flexWeight;
        char m_flexWeight[0x18]; // 0x7c0        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        Vector m_vLookTargetPosition; // 0x7d8        
        // metadata: MNetworkEnable
        bool m_blinktoggle; // 0x7e4        
        [[maybe_unused]] std::uint8_t pad_0x7e5[0x53]; // 0x7e5
        entity2::GameTime_t m_flAllowResponsesEndTime; // 0x838        
        entity2::GameTime_t m_flLastFlexAnimationTime; // 0x83c        
        client::SceneEventId_t m_nNextSceneEventId; // 0x840        
        bool m_bUpdateLayerPriorities; // 0x844        
        [[maybe_unused]] std::uint8_t pad_0x845[0xb];
        
        // Datamap fields:
        // void CBaseFlexProcessSceneEventsThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseFlex because it is not a standard-layout class
    static_assert(sizeof(CBaseFlex) == 0x850);
};
