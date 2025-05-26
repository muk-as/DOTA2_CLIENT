#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CSoundOpvarSetPointBase.hpp"

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
        // Size: 0x5c8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CSoundOpvarSetOBBWindEntity : public source2sdk::server::CSoundOpvarSetPointBase
        {
        public:
            Vector m_vMins; // 0x588            
            Vector m_vMaxs; // 0x594            
            Vector m_vDistanceMins; // 0x5a0            
            Vector m_vDistanceMaxs; // 0x5ac            
            float m_flWindMin; // 0x5b8            
            float m_flWindMax; // 0x5bc            
            float m_flWindMapMin; // 0x5c0            
            float m_flWindMapMax; // 0x5c4            
            
            // Datamap fields:
            // void CSoundOpvarSetOBBWindEntitySetOpvarThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundOpvarSetOBBWindEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundOpvarSetOBBWindEntity) == 0x5c8);
    };
};
