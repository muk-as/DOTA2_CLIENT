#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1888
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_StormSpirit_Electric_Rave : public source2sdk::client::CDOTA_Buff
        {
        public:
            float overload_aoe; // 0x1878            
            std::int32_t overload_damage; // 0x187c            
            std::int32_t shard_attack_speed_bonus; // 0x1880            
            uint8_t _pad1884[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_StormSpirit_Electric_Rave because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_StormSpirit_Electric_Rave) == 0x1888);
    };
};
