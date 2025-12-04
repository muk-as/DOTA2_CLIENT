#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Nevermore_Requiem : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float requiem_line_width_start; // 0x_            
            float requiem_line_width_end; // 0x_            
            std::int32_t m_nCachedSouls; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x_            
            std::int32_t m_nKilleater_nLines; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecHeroesReqd has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecHeroesReqd;
            char m_vecHeroesReqd[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Nevermore_Requiem because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Nevermore_Requiem) == 0x_);
    };
};
