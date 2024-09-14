#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
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
    // Size: 0x5e8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Gyrocopter_Call_Down : public client::C_DOTABaseAbility
    {
    public:
        Vector m_vEndpoint; // 0x5d8        
        int32_t range_scepter; // 0x5e4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Gyrocopter_Call_Down because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Gyrocopter_Call_Down) == 0x5e8);
};
