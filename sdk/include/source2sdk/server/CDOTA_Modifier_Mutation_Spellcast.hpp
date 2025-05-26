#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTABaseAbility;
    };
};

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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Mutation_Spellcast : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_vecAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CDOTABaseAbility*> m_vecAbilities;
            char m_vecAbilities[0x18]; // 0x1878            
            float m_fNextCastTime; // 0x1890            
            float m_fCastInterval; // 0x1894            
            float m_fWarningTime; // 0x1898            
            std::int32_t m_iNextAbility; // 0x189c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Mutation_Spellcast because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Mutation_Spellcast) == 0x18a0);
    };
};
