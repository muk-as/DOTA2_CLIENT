#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/Class_T.hpp"
#include "source2sdk/client/DamageTypes_t.hpp"
#include "source2sdk/server/CModelPointEntity.hpp"
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
        // Size: 0x848
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CEnvExplosion : public source2sdk::server::CModelPointEntity
        {
        public:
            std::int32_t m_iMagnitude; // 0x7f0            
            float m_flPlayerDamage; // 0x7f4            
            std::int32_t m_iRadiusOverride; // 0x7f8            
            float m_flInnerRadius; // 0x7fc            
            float m_flDamageForce; // 0x800            
            // m_hInflictor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hInflictor;
            char m_hInflictor[0x4]; // 0x804            
            source2sdk::client::DamageTypes_t m_iCustomDamageType; // 0x808            
            bool m_bCreateDebris; // 0x80c            
            uint8_t _pad080d[0xb]; // 0x80d
            CUtlSymbolLarge m_iszCustomEffectName; // 0x818            
            CUtlSymbolLarge m_iszCustomSoundName; // 0x820            
            bool m_bSuppressParticleImpulse; // 0x828            
            uint8_t _pad0829[0x3]; // 0x829
            source2sdk::client::Class_T m_iClassIgnore; // 0x82c            
            source2sdk::client::Class_T m_iClassIgnore2; // 0x830            
            uint8_t _pad0834[0x4]; // 0x834
            CUtlSymbolLarge m_iszEntityIgnoreName; // 0x838            
            // m_hEntityIgnore has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEntityIgnore;
            char m_hEntityIgnore[0x4]; // 0x840            
            uint8_t _pad0844[0x4];
            
            // Datamap fields:
            // CUtlSymbolLarge explosion_type; // 0x7fffffff
            // uint32_t m_nExplosionType; // 0x810
            // void InputExplode; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvExplosion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvExplosion) == 0x848);
    };
};
