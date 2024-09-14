#pragma once
#include "source2sdk/client/C_PointEntity.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5c8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "string_t m_iszOverlayNames"
    // static metadata: MNetworkVarNames "float32 m_flOverlayTimes"
    // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
    // static metadata: MNetworkVarNames "int32 m_iDesiredOverlay"
    // static metadata: MNetworkVarNames "bool m_bIsActive"
    #pragma pack(push, 1)
    class C_EnvScreenOverlay : public client::C_PointEntity
    {
    public:
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszOverlayNames[10]; // 0x538        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "11"
        // metadata: MNetworkMinValue "-1,000000"
        // metadata: MNetworkMaxValue "63,000000"
        float m_flOverlayTimes[10]; // 0x588        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStartTime; // 0x5b0        
        // metadata: MNetworkEnable
        int32_t m_iDesiredOverlay; // 0x5b4        
        // metadata: MNetworkEnable
        bool m_bIsActive; // 0x5b8        
        bool m_bWasActive; // 0x5b9        
        [[maybe_unused]] std::uint8_t pad_0x5ba[0x2]; // 0x5ba
        int32_t m_iCachedDesiredOverlay; // 0x5bc        
        int32_t m_iCurrentOverlay; // 0x5c0        
        entity2::GameTime_t m_flCurrentOverlayTime; // 0x5c4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_EnvScreenOverlay because it is not a standard-layout class
    static_assert(sizeof(C_EnvScreenOverlay) == 0x5c8);
};
