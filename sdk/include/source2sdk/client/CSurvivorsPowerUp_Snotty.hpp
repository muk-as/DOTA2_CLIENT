#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSurvivorsPowerUp_AreaAttack_Circle.hpp"
#include "source2sdk/client/SurvivorsParticleID_t.hpp"
#include "source2sdk/client/SurvivorsUnitID_t.hpp"

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
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CSurvivorsPowerUp_Snotty : public source2sdk::client::CSurvivorsPowerUp_AreaAttack_Circle
        {
        public:
            // m_vecSnotties has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::SurvivorsUnitID_t> m_vecSnotties;
            char m_vecSnotties[0x_]; // 0x_            
            float m_flRotationSpeedDeg; // 0x_            
            float m_flRotationDist; // 0x_            
            // m_vecSnottyParticles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::SurvivorsParticleID_t> m_vecSnottyParticles;
            char m_vecSnottyParticles[0x_]; // 0x_            
            float m_flParticleLifetime; // 0x_            
            float m_flTimeUntilNextSalvo; // 0x_            
            std::int32_t m_nSalvosRemaining; // 0x_            
            bool m_bFirstSalvo; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSurvivorsPowerUp_Snotty because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CSurvivorsPowerUp_Snotty) == 0x_);
    };
};
