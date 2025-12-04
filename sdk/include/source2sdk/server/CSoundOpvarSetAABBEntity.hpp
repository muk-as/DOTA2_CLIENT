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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CSoundOpvarSetAABBEntity : public source2sdk::server::CSoundOpvarSetPointEntity
        {
        public:
            Vector m_vDistanceInnerMins; // 0x_            
            Vector m_vDistanceInnerMaxs; // 0x_            
            Vector m_vDistanceOuterMins; // 0x_            
            Vector m_vDistanceOuterMaxs; // 0x_            
            std::int32_t m_nAABBDirection; // 0x_            
            Vector m_vInnerMins; // 0x_            
            Vector m_vInnerMaxs; // 0x_            
            Vector m_vOuterMins; // 0x_            
            Vector m_vOuterMaxs; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void CSoundOpvarSetAABBEntitySetOpvarThink; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundOpvarSetAABBEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundOpvarSetAABBEntity) == 0x_);
    };
};
