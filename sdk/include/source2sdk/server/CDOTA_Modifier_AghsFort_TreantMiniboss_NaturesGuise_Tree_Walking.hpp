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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AghsFort_TreantMiniboss_NaturesGuise_Tree_Walking : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t movement_bonus; // 0x1888            
            std::int32_t regen_amp; // 0x188c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_TreantMiniboss_NaturesGuise_Tree_Walking because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_AghsFort_TreantMiniboss_NaturesGuise_Tree_Walking) == 0x1890);
    };
};
