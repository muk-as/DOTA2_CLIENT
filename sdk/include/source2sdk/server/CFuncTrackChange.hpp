#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CFuncPlatRot.hpp"
#include "source2sdk/server/TRAIN_CODE.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CFuncTrackTrain;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPathTrack;
    };
};

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
        class CFuncTrackChange : public source2sdk::server::CFuncPlatRot
        {
        public:
            // metadata: MClassPtr
            source2sdk::server::CPathTrack* m_trackTop; // 0x_            
            // metadata: MClassPtr
            source2sdk::server::CPathTrack* m_trackBottom; // 0x_            
            // metadata: MClassPtr
            source2sdk::server::CFuncTrackTrain* m_train; // 0x_            
            CUtlSymbolLarge m_trackTopName; // 0x_            
            CUtlSymbolLarge m_trackBottomName; // 0x_            
            CUtlSymbolLarge m_trainName; // 0x_            
            source2sdk::server::TRAIN_CODE m_code; // 0x_            
            std::int32_t m_targetState; // 0x_            
            std::int32_t m_use; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void CFuncTrackChangeFind; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncTrackChange because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncTrackChange) == 0x_);
    };
};
