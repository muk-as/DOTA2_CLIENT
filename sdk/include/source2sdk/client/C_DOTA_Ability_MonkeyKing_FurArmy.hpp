#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x6b8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_MonkeyKing_FurArmy : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hThinker;
            char m_hThinker[0x4]; // 0x680            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x684            
            std::int32_t num_first_soldiers; // 0x688            
            std::int32_t num_second_soldiers; // 0x68c            
            bool m_bCreateMonkeys; // 0x690            
            uint8_t _pad0691[0x3]; // 0x691
            source2sdk::entity2::GameTime_t m_flNextCreationTime; // 0x694            
            source2sdk::entity2::GameTime_t m_flScepterTime; // 0x698            
            uint8_t _pad069c[0x4]; // 0x69c
            // m_vecSoldiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecSoldiers;
            char m_vecSoldiers[0x18]; // 0x6a0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_MonkeyKing_FurArmy because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_MonkeyKing_FurArmy) == 0x6b8);
    };
};
