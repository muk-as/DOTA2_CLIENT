#pragma once
#include "source2sdk/client/CSurvivorsPowerUp_AreaAttack_Circle.hpp"
#include "source2sdk/client/SurvivorsUnitID_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particleslib
{
    class CNewParticleEffect;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x850
    // Has VTable
    #pragma pack(push, 1)
    class CSurvivorsPowerUp_AreaAttack_CircleConstant : public client::CSurvivorsPowerUp_AreaAttack_Circle
    {
    public:
        // m_mapEnemyDamagedTimers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::SurvivorsUnitID_t,float> m_mapEnemyDamagedTimers;
        char m_mapEnemyDamagedTimers[0x28]; // 0x800        
        particleslib::CNewParticleEffect* m_pParticleEffect; // 0x828        
        [[maybe_unused]] std::uint8_t pad_0x830[0x18]; // 0x830
        float m_flNextTrailCreationTimer; // 0x848        
        [[maybe_unused]] std::uint8_t pad_0x84c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSurvivorsPowerUp_AreaAttack_CircleConstant because it is not a standard-layout class
    static_assert(sizeof(CSurvivorsPowerUp_AreaAttack_CircleConstant) == 0x850);
};
