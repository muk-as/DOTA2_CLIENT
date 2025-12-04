#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CLogicalEntity.hpp"

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
        class CLogicCollisionPair : public source2sdk::server::CLogicalEntity
        {
        public:
            CUtlSymbolLarge m_nameAttach1; // 0x_            
            CUtlSymbolLarge m_nameAttach2; // 0x_            
            bool m_supportMultipleEntitiesWithSameName; // 0x_            
            bool m_disabled; // 0x_            
            bool m_succeeded; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void InputDisableCollisions; // 0x_
            // CUtlSymbolLarge InputDisableCollisionsWith; // 0x_
            // void InputEnableCollisions; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLogicCollisionPair because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CLogicCollisionPair) == 0x_);
    };
};
