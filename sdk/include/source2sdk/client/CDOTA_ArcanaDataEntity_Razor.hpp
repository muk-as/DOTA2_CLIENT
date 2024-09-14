#pragma once
#include "source2sdk/client/CDOTA_ArcanaDataEntity_Base.hpp"
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
    // Size: 0x38
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MNetworkVarNames "int m_nEmpoweredKills"
    #pragma pack(push, 1)
    class CDOTA_ArcanaDataEntity_Razor : public client::CDOTA_ArcanaDataEntity_Base
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnRazorArcanaChanged"
        int32_t m_nEmpoweredKills; // 0x30        
        [[maybe_unused]] std::uint8_t pad_0x34[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_ArcanaDataEntity_Razor because it is not a standard-layout class
    static_assert(sizeof(CDOTA_ArcanaDataEntity_Razor) == 0x38);
};
