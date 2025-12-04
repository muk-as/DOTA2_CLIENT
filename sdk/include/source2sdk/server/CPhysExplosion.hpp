#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CPointEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPhysExplosion : public source2sdk::server::CPointEntity
        {
        public:
            bool m_bExplodeOnSpawn; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flMagnitude; // 0x_            
            float m_flDamage; // 0x_            
            float m_radius; // 0x_            
            CUtlSymbolLarge m_targetEntityName; // 0x_            
            float m_flInnerRadius; // 0x_            
            float m_flPushScale; // 0x_            
            bool m_bConvertToDebrisWhenPossible; // 0x_            
            bool m_bAffectInvulnerableEnts; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::CEntityIOOutput m_OnPushedPlayer; // 0x_            
            
            // Datamap fields:
            // void InputExplode; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysExplosion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysExplosion) == 0x_);
    };
};
