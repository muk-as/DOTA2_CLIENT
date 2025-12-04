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
        class CPathCorner : public source2sdk::server::CPointEntity
        {
        public:
            float m_flWait; // 0x_            
            float m_flRadius; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnPass; // 0x_            
            
            // Datamap fields:
            // CUtlSymbolLarge InputSetNextPathCorner; // 0x_
            // void InputInPass; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPathCorner because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPathCorner) == 0x_);
    };
};
