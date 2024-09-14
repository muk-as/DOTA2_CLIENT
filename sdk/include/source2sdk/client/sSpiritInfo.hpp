#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x2c
    #pragma pack(push, 1)
    class sSpiritInfo
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x4]; // 0x0
        Vector vTargetLoc; // 0x4        
        // hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> hTarget;
        char hTarget[0x4]; // 0x10        
        bool bHit; // 0x14        
        [[maybe_unused]] std::uint8_t pad_0x15[0x3]; // 0x15
        int32_t iHealAmount; // 0x18        
        int32_t iMinDamage; // 0x1c        
        int32_t iMaxDamage; // 0x20        
        client::ParticleIndex_t nFXAmbientIndex; // 0x24        
        // hDeadHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> hDeadHero;
        char hDeadHero[0x4]; // 0x28        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(sSpiritInfo, vTargetLoc) == 0x4);
    static_assert(offsetof(sSpiritInfo, hTarget) == 0x10);
    static_assert(offsetof(sSpiritInfo, bHit) == 0x14);
    static_assert(offsetof(sSpiritInfo, iHealAmount) == 0x18);
    static_assert(offsetof(sSpiritInfo, iMinDamage) == 0x1c);
    static_assert(offsetof(sSpiritInfo, iMaxDamage) == 0x20);
    static_assert(offsetof(sSpiritInfo, nFXAmbientIndex) == 0x24);
    static_assert(offsetof(sSpiritInfo, hDeadHero) == 0x28);
    
    static_assert(sizeof(sSpiritInfo) == 0x2c);
};
