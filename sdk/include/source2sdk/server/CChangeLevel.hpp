#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseTrigger.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x9c0
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CChangeLevel : public server::CBaseTrigger
    {
    public:
        CUtlString m_sMapName; // 0x980        
        CUtlString m_sLandmarkName; // 0x988        
        entity2::CEntityIOOutput m_OnChangeLevel; // 0x990        
        bool m_bTouched; // 0x9b8        
        bool m_bNoTouch; // 0x9b9        
        bool m_bNewChapter; // 0x9ba        
        bool m_bOnChangeLevelFired; // 0x9bb        
        [[maybe_unused]] std::uint8_t pad_0x9bc[0x4];
        
        // Datamap fields:
        // void InputChangeLevel; // 0x0
        // CUtlString map; // 0x7fffffff
        // CUtlString landmark; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CChangeLevel because it is not a standard-layout class
    static_assert(sizeof(CChangeLevel) == 0x9c0);
};
