#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSurvivorsPowerUp_AreaAttack_Circle.hpp"
#include "source2sdk/client/SurvivorsUnitID_t.hpp"
namespace source2sdk
{
    namespace particleslib
    {
        struct CNewParticleEffect;
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
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CSurvivorsPowerUp_AreaAttack_CircleConstant : public source2sdk::client::CSurvivorsPowerUp_AreaAttack_Circle
        {
        public:
            // m_mapEnemyDamagedTimers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::SurvivorsUnitID_t,float> m_mapEnemyDamagedTimers;
            char m_mapEnemyDamagedTimers[0x_]; // 0x_            
            source2sdk::particleslib::CNewParticleEffect* m_pParticleEffect; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flNextTrailCreationTimer; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSurvivorsPowerUp_AreaAttack_CircleConstant because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CSurvivorsPowerUp_AreaAttack_CircleConstant) == 0x_);
    };
};
