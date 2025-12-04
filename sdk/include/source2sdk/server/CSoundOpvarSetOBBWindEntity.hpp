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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CSoundOpvarSetOBBWindEntity : public source2sdk::server::CSoundOpvarSetPointBase
        {
        public:
            Vector m_vMins; // 0x_            
            Vector m_vMaxs; // 0x_            
            Vector m_vDistanceMins; // 0x_            
            Vector m_vDistanceMaxs; // 0x_            
            float m_flWindMin; // 0x_            
            float m_flWindMax; // 0x_            
            float m_flWindMapMin; // 0x_            
            float m_flWindMapMax; // 0x_            
            
            // Datamap fields:
            // void CSoundOpvarSetOBBWindEntitySetOpvarThink; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundOpvarSetOBBWindEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundOpvarSetOBBWindEntity) == 0x_);
    };
};
