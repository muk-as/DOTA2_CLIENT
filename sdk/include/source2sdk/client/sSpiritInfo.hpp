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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        #pragma pack(push, 1)
        class sSpiritInfo
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            Vector vTargetLoc; // 0x_            
            // hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> hTarget;
            char hTarget[0x_]; // 0x_            
            bool bHit; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t iHealAmount; // 0x_            
            std::int32_t iMinDamage; // 0x_            
            std::int32_t iMaxDamage; // 0x_            
            source2sdk::client::ParticleIndex_t nFXAmbientIndex; // 0x_            
            // hDeadHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> hDeadHero;
            char hDeadHero[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::sSpiritInfo, vTargetLoc) == 0x_);
        static_assert(offsetof(source2sdk::client::sSpiritInfo, hTarget) == 0x_);
        static_assert(offsetof(source2sdk::client::sSpiritInfo, bHit) == 0x_);
        static_assert(offsetof(source2sdk::client::sSpiritInfo, iHealAmount) == 0x_);
        static_assert(offsetof(source2sdk::client::sSpiritInfo, iMinDamage) == 0x_);
        static_assert(offsetof(source2sdk::client::sSpiritInfo, iMaxDamage) == 0x_);
        static_assert(offsetof(source2sdk::client::sSpiritInfo, nFXAmbientIndex) == 0x_);
        static_assert(offsetof(source2sdk::client::sSpiritInfo, hDeadHero) == 0x_);
        
        static_assert(sizeof(source2sdk::client::sSpiritInfo) == 0x_);
    };
};
