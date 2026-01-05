#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"

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
        class CPhysicsSpring : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            float m_flFrequency; // 0x_            
            float m_flDampingRatio; // 0x_            
            float m_flRestLength; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_nameAttachStart; // 0x_            
            CUtlSymbolLarge m_nameAttachEnd; // 0x_            
            VectorWS m_start; // 0x_            
            VectorWS m_end; // 0x_            
            // metadata: MNotSaved
            std::uint32_t m_teleportTick; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void m_pSpringJoint; // 0x_
            // float lengthscale; // 0x_
            // float InputSetFrequency; // 0x_
            // float InputSetDampingRatio; // 0x_
            // float InputSetRestLength; // 0x_
            // float InputAddRestLength; // 0x_
            // float InputRemoveRestLength; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysicsSpring because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysicsSpring) == 0x_);
    };
};
