#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CPointEntity.hpp"
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
    // Size: 0x540
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "string_t m_iszOverlayNames"
    // static metadata: MNetworkVarNames "float32 m_flOverlayTimes"
    // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
    // static metadata: MNetworkVarNames "int32 m_iDesiredOverlay"
    // static metadata: MNetworkVarNames "bool m_bIsActive"
    #pragma pack(push, 1)
    class CEnvScreenOverlay : public server::CPointEntity
    {
    public:
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszOverlayNames[10]; // 0x4b8        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "11"
        // metadata: MNetworkMinValue "-1,000000"
        // metadata: MNetworkMaxValue "63,000000"
        float m_flOverlayTimes[10]; // 0x508        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStartTime; // 0x530        
        // metadata: MNetworkEnable
        int32_t m_iDesiredOverlay; // 0x534        
        // metadata: MNetworkEnable
        bool m_bIsActive; // 0x538        
        [[maybe_unused]] std::uint8_t pad_0x539[0x7];
        
        // Datamap fields:
        // void InputStartOverlay; // 0x0
        // void InputStopOverlay; // 0x0
        // int32_t InputSwitchOverlay; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvScreenOverlay because it is not a standard-layout class
    static_assert(sizeof(CEnvScreenOverlay) == 0x540);
};
