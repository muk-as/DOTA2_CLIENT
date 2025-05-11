#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x2c
        #pragma pack(push, 1)
        class sSpiritInfo
        {
        public:
            uint8_t _pad0000[0x4]; // 0x0
            Vector vTargetLoc; // 0x4            
            // hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> hTarget;
            char hTarget[0x4]; // 0x10            
            bool bHit; // 0x14            
            uint8_t _pad0015[0x3]; // 0x15
            std::int32_t iHealAmount; // 0x18            
            std::int32_t iMinDamage; // 0x1c            
            std::int32_t iMaxDamage; // 0x20            
            source2sdk::client::ParticleIndex_t nFXAmbientIndex; // 0x24            
            // hDeadHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> hDeadHero;
            char hDeadHero[0x4]; // 0x28            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::sSpiritInfo, vTargetLoc) == 0x4);
        static_assert(offsetof(source2sdk::client::sSpiritInfo, hTarget) == 0x10);
        static_assert(offsetof(source2sdk::client::sSpiritInfo, bHit) == 0x14);
        static_assert(offsetof(source2sdk::client::sSpiritInfo, iHealAmount) == 0x18);
        static_assert(offsetof(source2sdk::client::sSpiritInfo, iMinDamage) == 0x1c);
        static_assert(offsetof(source2sdk::client::sSpiritInfo, iMaxDamage) == 0x20);
        static_assert(offsetof(source2sdk::client::sSpiritInfo, nFXAmbientIndex) == 0x24);
        static_assert(offsetof(source2sdk::client::sSpiritInfo, hDeadHero) == 0x28);
        
        static_assert(sizeof(source2sdk::client::sSpiritInfo) == 0x2c);
    };
};
