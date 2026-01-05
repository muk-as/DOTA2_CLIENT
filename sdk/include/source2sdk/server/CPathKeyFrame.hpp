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
        class CPathKeyFrame : public source2sdk::server::CLogicalEntity
        {
        public:
            Vector m_Origin; // 0x_            
            QAngle m_Angles; // 0x_            
            Quaternion m_qAngle; // 0x_            
            CUtlSymbolLarge m_iNextKey; // 0x_            
            float m_flNextTime; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MClassPtr
            source2sdk::server::CPathKeyFrame* m_pNextKey; // 0x_            
            // metadata: MClassPtr
            source2sdk::server::CPathKeyFrame* m_pPrevKey; // 0x_            
            float m_flMoveSpeed; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPathKeyFrame because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPathKeyFrame) == 0x_);
    };
};
