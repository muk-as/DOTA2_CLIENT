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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x530
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPathKeyFrame : public source2sdk::server::CLogicalEntity
        {
        public:
            Vector m_Origin; // 0x4d8            
            QAngle m_Angles; // 0x4e4            
            Quaternion m_qAngle; // 0x4f0            
            CUtlSymbolLarge m_iNextKey; // 0x500            
            float m_flNextTime; // 0x508            
            uint8_t _pad050c[0x4]; // 0x50c
            source2sdk::server::CPathKeyFrame* m_pNextKey; // 0x510            
            source2sdk::server::CPathKeyFrame* m_pPrevKey; // 0x518            
            float m_flMoveSpeed; // 0x520            
            uint8_t _pad0524[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPathKeyFrame because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPathKeyFrame) == 0x530);
    };
};
