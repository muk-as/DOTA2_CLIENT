#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CSoundOpvarSetPointEntity.hpp"

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
        // Size: 0x6c0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CSoundOpvarSetPathCornerEntity : public source2sdk::server::CSoundOpvarSetPointEntity
        {
        public:
            uint8_t _pad0698[0x18]; // 0x698
            float m_flDistMinSqr; // 0x6b0            
            float m_flDistMaxSqr; // 0x6b4            
            CUtlSymbolLarge m_iszPathCornerEntityName; // 0x6b8            
            
            // Datamap fields:
            // void CSoundOpvarSetPathCornerEntitySetOpvarThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundOpvarSetPathCornerEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundOpvarSetPathCornerEntity) == 0x6c0);
    };
};
