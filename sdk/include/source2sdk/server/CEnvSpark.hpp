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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x510
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CEnvSpark : public source2sdk::server::CPointEntity
        {
        public:
            float m_flDelay; // 0x4d8            
            std::int32_t m_nMagnitude; // 0x4dc            
            std::int32_t m_nTrailLength; // 0x4e0            
            std::int32_t m_nType; // 0x4e4            
            source2sdk::entity2::CEntityIOOutput m_OnSpark; // 0x4e8            
            
            // Datamap fields:
            // void CEnvSparkSparkThink; // 0x0
            // void InputStartSpark; // 0x0
            // void InputStopSpark; // 0x0
            // void InputToggleSpark; // 0x0
            // void InputSparkOnce; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvSpark because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvSpark) == 0x510);
    };
};
