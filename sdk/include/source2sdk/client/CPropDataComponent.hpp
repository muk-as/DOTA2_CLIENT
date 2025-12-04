#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityComponent.hpp"

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
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CPropDataComponent : public source2sdk::entity2::CEntityComponent
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            float m_flDmgModBullet; // 0x_            
            float m_flDmgModClub; // 0x_            
            float m_flDmgModExplosive; // 0x_            
            float m_flDmgModFire; // 0x_            
            CUtlSymbolLarge m_iszPhysicsDamageTableName; // 0x_            
            CUtlSymbolLarge m_iszBasePropData; // 0x_            
            std::int32_t m_nInteractions; // 0x_            
            bool m_bSpawnMotionDisabled; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nDisableTakePhysicsDamageSpawnFlag; // 0x_            
            std::int32_t m_nMotionDisabledSpawnFlag; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPropDataComponent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CPropDataComponent) == 0x_);
    };
};
