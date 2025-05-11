#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5f0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_MonkeyKing_FurArmy : public source2sdk::server::CDOTABaseAbility
        {
        public:
            // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hThinker;
            char m_hThinker[0x4]; // 0x5b8            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x5bc            
            std::int32_t num_first_soldiers; // 0x5c0            
            std::int32_t num_second_soldiers; // 0x5c4            
            bool m_bCreateMonkeys; // 0x5c8            
            uint8_t _pad05c9[0x3]; // 0x5c9
            source2sdk::entity2::GameTime_t m_flNextCreationTime; // 0x5cc            
            source2sdk::entity2::GameTime_t m_flScepterTime; // 0x5d0            
            uint8_t _pad05d4[0x4]; // 0x5d4
            // m_vecSoldiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecSoldiers;
            char m_vecSoldiers[0x18]; // 0x5d8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_MonkeyKing_FurArmy because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_MonkeyKing_FurArmy) == 0x5f0);
    };
};
