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
        // Size: 0x5e8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_KeeperOfTheLight_Illuminate : public source2sdk::server::CDOTABaseAbility
        {
        public:
            // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hThinker;
            char m_hThinker[0x4]; // 0x5c0            
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x5c4            
            std::int32_t m_iProjectile; // 0x5c8            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x5cc            
            source2sdk::client::ParticleIndex_t m_nFXIndexB; // 0x5d0            
            Vector m_vPos; // 0x5d4            
            std::int32_t total_damage; // 0x5e0            
            bool m_bStarted; // 0x5e4            
            uint8_t _pad05e5[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_KeeperOfTheLight_Illuminate because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_KeeperOfTheLight_Illuminate) == 0x5e8);
    };
};
