#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
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
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18f8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Invoker_IceWall_VectorTarget_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t slow; // 0x1878            
            float slow_duration; // 0x187c            
            float root_duration; // 0x1880            
            float damage_per_second; // 0x1884            
            float root_damage; // 0x1888            
            float tick_interval; // 0x188c            
            float wall_total_length; // 0x1890            
            float wall_width; // 0x1894            
            Vector m_vWallCenter; // 0x1898            
            Vector m_vWallDirection; // 0x18a4            
            Vector m_vWallRight; // 0x18b0            
            Vector m_vWallLeft; // 0x18bc            
            source2sdk::client::ParticleIndex_t m_nParticleIndexA; // 0x18c8            
            source2sdk::client::ParticleIndex_t m_nParticleIndexB; // 0x18cc            
            bool m_bStartedExpanding; // 0x18d0            
            uint8_t _pad18d1[0x3]; // 0x18d1
            float glacier_formation_speed; // 0x18d4            
            source2sdk::entity2::GameTime_t m_flFormationStartTime; // 0x18d8            
            bool m_bGrantedGem; // 0x18dc            
            uint8_t _pad18dd[0x3]; // 0x18dd
            // m_vecEnemiesInWall has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecEnemiesInWall;
            char m_vecEnemiesInWall[0x18]; // 0x18e0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Invoker_IceWall_VectorTarget_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Invoker_IceWall_VectorTarget_Thinker) == 0x18f8);
    };
};
