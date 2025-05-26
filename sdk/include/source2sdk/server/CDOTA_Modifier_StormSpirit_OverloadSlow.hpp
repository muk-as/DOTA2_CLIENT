#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1880
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_StormSpirit_OverloadSlow : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t overload_move_slow; // 0x1878            
            std::int32_t overload_attack_slow; // 0x187c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_StormSpirit_OverloadSlow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_StormSpirit_OverloadSlow) == 0x1880);
    };
};
