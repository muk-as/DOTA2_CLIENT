#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace client
    {
        struct DOTAAbilityDefinition_t;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        #pragma pack(push, 1)
        struct DotaAbilityRelationship_t
        {
        public:
            // m_vecTalents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::DOTAAbilityDefinition_t*> m_vecTalents;
            char m_vecTalents[0x_]; // 0x_            
            bool m_bHasScepter; // 0x_            
            bool m_bHasShard; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::DotaAbilityRelationship_t, m_vecTalents) == 0x_);
        static_assert(offsetof(source2sdk::client::DotaAbilityRelationship_t, m_bHasScepter) == 0x_);
        static_assert(offsetof(source2sdk::client::DotaAbilityRelationship_t, m_bHasShard) == 0x_);
        
        static_assert(sizeof(source2sdk::client::DotaAbilityRelationship_t) == 0x_);
    };
};
