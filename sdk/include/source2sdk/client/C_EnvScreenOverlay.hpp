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
    // Size: 0x5f0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
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
        CUtlSymbolLarge m_iszOverlayNames[10]; // 0x560        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "11"
        // metadata: MNetworkMinValue "-1,000000"
        // metadata: MNetworkMaxValue "63,000000"
        float m_flOverlayTimes[10]; // 0x5b0        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStartTime; // 0x5d8        
        // metadata: MNetworkEnable
        int32_t m_iDesiredOverlay; // 0x5dc        
        // metadata: MNetworkEnable
        bool m_bIsActive; // 0x5e0        
        bool m_bWasActive; // 0x5e1        
        [[maybe_unused]] std::uint8_t pad_0x5e2[0x2]; // 0x5e2
        int32_t m_iCachedDesiredOverlay; // 0x5e4        
        int32_t m_iCurrentOverlay; // 0x5e8        
        entity2::GameTime_t m_flCurrentOverlayTime; // 0x5ec        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_EnvScreenOverlay because it is not a standard-layout class
    static_assert(sizeof(C_EnvScreenOverlay) == 0x5f0);
};
