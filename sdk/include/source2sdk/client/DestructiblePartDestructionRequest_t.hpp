#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/DamageTypes_t.hpp"
#include "source2sdk/client/EDestructibleParts_DestroyParameterFlags.hpp"

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
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct DestructiblePartDestructionRequest_t
        {
        public:
            source2sdk::client::EDestructibleParts_DestroyParameterFlags m_nDestroyFlags; // 0x_            
            source2sdk::client::DamageTypes_t m_nDamageType; // 0x_            
            float m_flPartDamage; // 0x_            
            float m_flPartDamageRadius; // 0x_            
            VectorWS m_vWsPartDamageOrigin; // 0x_            
            Vector m_vWsPartDamageForce; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::DestructiblePartDestructionRequest_t, m_nDestroyFlags) == 0x_);
        static_assert(offsetof(source2sdk::client::DestructiblePartDestructionRequest_t, m_nDamageType) == 0x_);
        static_assert(offsetof(source2sdk::client::DestructiblePartDestructionRequest_t, m_flPartDamage) == 0x_);
        static_assert(offsetof(source2sdk::client::DestructiblePartDestructionRequest_t, m_flPartDamageRadius) == 0x_);
        static_assert(offsetof(source2sdk::client::DestructiblePartDestructionRequest_t, m_vWsPartDamageOrigin) == 0x_);
        static_assert(offsetof(source2sdk::client::DestructiblePartDestructionRequest_t, m_vWsPartDamageForce) == 0x_);
        
        static_assert(sizeof(source2sdk::client::DestructiblePartDestructionRequest_t) == 0x_);
    };
};
