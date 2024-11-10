#pragma once
#include "source2sdk/server/CFuncPlatRot.hpp"
#include "source2sdk/server/TRAIN_CODE.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CFuncTrackTrain;
};

namespace source2sdk::server
{
    class CPathTrack;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x8b8
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CFuncTrackChange : public server::CFuncPlatRot
    {
    public:
        server::CPathTrack* m_trackTop; // 0x878        
        server::CPathTrack* m_trackBottom; // 0x880        
        server::CFuncTrackTrain* m_train; // 0x888        
        CUtlSymbolLarge m_trackTopName; // 0x890        
        CUtlSymbolLarge m_trackBottomName; // 0x898        
        CUtlSymbolLarge m_trainName; // 0x8a0        
        server::TRAIN_CODE m_code; // 0x8a8        
        int32_t m_targetState; // 0x8ac        
        int32_t m_use; // 0x8b0        
        [[maybe_unused]] std::uint8_t pad_0x8b4[0x4];
        
        // Datamap fields:
        // void CFuncTrackChangeFind; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFuncTrackChange because it is not a standard-layout class
    static_assert(sizeof(CFuncTrackChange) == 0x8b8);
};
