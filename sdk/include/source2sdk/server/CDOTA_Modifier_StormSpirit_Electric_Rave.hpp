#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1718
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_StormSpirit_Electric_Rave : public client::CDOTA_Buff
    {
    public:
        float overload_aoe; // 0x1708        
        int32_t overload_damage; // 0x170c        
        int32_t shard_attack_speed_bonus; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1714[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_StormSpirit_Electric_Rave because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_StormSpirit_Electric_Rave) == 0x1718);
};
