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
    // Size: 0x608
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_GiantWolf_Intimidate : public client::C_DOTABaseAbility
    {
    public:
        int32_t radius; // 0x600        
        float duration; // 0x604        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_GiantWolf_Intimidate because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_GiantWolf_Intimidate) == 0x608);
};
