#pragma once
#include "source2sdk/client/CSurvivorsEnemy.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseModelEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x340
    // Has VTable
    #pragma pack(push, 1)
    class CSurvivorsEnemyPillar : public client::CSurvivorsEnemy
    {
    public:
        bool m_bDestroyed; // 0x338        
        [[maybe_unused]] std::uint8_t pad_0x339[0x3]; // 0x339
        // m_pPillarEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseModelEntity> m_pPillarEntity;
        char m_pPillarEntity[0x4]; // 0x33c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSurvivorsEnemyPillar because it is not a standard-layout class
    static_assert(sizeof(CSurvivorsEnemyPillar) == 0x340);
};
