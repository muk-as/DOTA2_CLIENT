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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPathTrack : public source2sdk::server::CPointEntity
        {
        public:
            // metadata: MClassPtr
            source2sdk::server::CPathTrack* m_pnext; // 0x_            
            // metadata: MClassPtr
            source2sdk::server::CPathTrack* m_pprevious; // 0x_            
            // metadata: MClassPtr
            source2sdk::server::CPathTrack* m_paltpath; // 0x_            
            float m_flRadius; // 0x_            
            float m_length; // 0x_            
            CUtlSymbolLarge m_altName; // 0x_            
            // metadata: MNotSaved
            std::int32_t m_nIterVal; // 0x_            
            source2sdk::server::TrackOrientationType_t m_eOrientationType; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnPass; // 0x_            
            
            // Datamap fields:
            // void InputPass; // 0x_
            // void InputEnableAlternatePath; // 0x_
            // void InputDisableAlternatePath; // 0x_
            // void InputToggleAlternatePath; // 0x_
            // void InputEnablePath; // 0x_
            // void InputDisablePath; // 0x_
            // void InputTogglePath; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPathTrack because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPathTrack) == 0x_);
    };
};
