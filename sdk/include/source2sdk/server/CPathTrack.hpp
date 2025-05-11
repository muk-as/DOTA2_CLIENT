#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CPointEntity.hpp"
#include "source2sdk/server/TrackOrientationType_t.hpp"

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
        // Size: 0x530
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPathTrack : public source2sdk::server::CPointEntity
        {
        public:
            source2sdk::server::CPathTrack* m_pnext; // 0x4d8            
            source2sdk::server::CPathTrack* m_pprevious; // 0x4e0            
            source2sdk::server::CPathTrack* m_paltpath; // 0x4e8            
            float m_flRadius; // 0x4f0            
            float m_length; // 0x4f4            
            CUtlSymbolLarge m_altName; // 0x4f8            
            std::int32_t m_nIterVal; // 0x500            
            source2sdk::server::TrackOrientationType_t m_eOrientationType; // 0x504            
            source2sdk::entity2::CEntityIOOutput m_OnPass; // 0x508            
            
            // Datamap fields:
            // void InputPass; // 0x0
            // void InputEnableAlternatePath; // 0x0
            // void InputDisableAlternatePath; // 0x0
            // void InputToggleAlternatePath; // 0x0
            // void InputEnablePath; // 0x0
            // void InputDisablePath; // 0x0
            // void InputTogglePath; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPathTrack because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPathTrack) == 0x530);
    };
};
