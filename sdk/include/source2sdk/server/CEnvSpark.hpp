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
        class CEnvSpark : public source2sdk::server::CPointEntity
        {
        public:
            float m_flDelay; // 0x_            
            std::int32_t m_nMagnitude; // 0x_            
            std::int32_t m_nTrailLength; // 0x_            
            std::int32_t m_nType; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnSpark; // 0x_            
            
            // Datamap fields:
            // void CEnvSparkSparkThink; // 0x_
            // void InputStartSpark; // 0x_
            // void InputStopSpark; // 0x_
            // void InputToggleSpark; // 0x_
            // void InputSparkOnce; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvSpark because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvSpark) == 0x_);
    };
};
