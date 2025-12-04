#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseTrigger.hpp"

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
        class CChangeLevel : public source2sdk::server::CBaseTrigger
        {
        public:
            CUtlString m_sMapName; // 0x_            
            CUtlString m_sLandmarkName; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnChangeLevel; // 0x_            
            bool m_bTouched; // 0x_            
            bool m_bNoTouch; // 0x_            
            bool m_bNewChapter; // 0x_            
            bool m_bOnChangeLevelFired; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void InputChangeLevel; // 0x_
            // CUtlString map; // 0x_
            // CUtlString landmark; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CChangeLevel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CChangeLevel) == 0x_);
    };
};
