#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Constructor
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct dynpitchvol_base_t
        {
        public:
            std::int32_t preset; // 0x_            
            std::int32_t pitchrun; // 0x_            
            std::int32_t pitchstart; // 0x_            
            std::int32_t spinup; // 0x_            
            std::int32_t spindown; // 0x_            
            std::int32_t volrun; // 0x_            
            std::int32_t volstart; // 0x_            
            std::int32_t fadein; // 0x_            
            std::int32_t fadeout; // 0x_            
            std::int32_t lfotype; // 0x_            
            std::int32_t lforate; // 0x_            
            std::int32_t lfomodpitch; // 0x_            
            std::int32_t lfomodvol; // 0x_            
            std::int32_t cspinup; // 0x_            
            std::int32_t cspincount; // 0x_            
            std::int32_t pitch; // 0x_            
            std::int32_t spinupsav; // 0x_            
            std::int32_t spindownsav; // 0x_            
            std::int32_t pitchfrac; // 0x_            
            std::int32_t vol; // 0x_            
            std::int32_t fadeinsav; // 0x_            
            std::int32_t fadeoutsav; // 0x_            
            std::int32_t volfrac; // 0x_            
            std::int32_t lfofrac; // 0x_            
            std::int32_t lfomult; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, preset) == 0x_);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, pitchrun) == 0x_);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, pitchstart) == 0x_);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, spinup) == 0x_);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, spindown) == 0x_);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, volrun) == 0x_);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, volstart) == 0x_);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, fadein) == 0x_);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, fadeout) == 0x_);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, lfotype) == 0x_);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, lforate) == 0x_);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, lfomodpitch) == 0x_);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, lfomodvol) == 0x_);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, cspinup) == 0x_);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, cspincount) == 0x_);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, pitch) == 0x_);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, spinupsav) == 0x_);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, spindownsav) == 0x_);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, pitchfrac) == 0x_);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, vol) == 0x_);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, fadeinsav) == 0x_);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, fadeoutsav) == 0x_);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, volfrac) == 0x_);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, lfofrac) == 0x_);
        static_assert(offsetof(source2sdk::server::dynpitchvol_base_t, lfomult) == 0x_);
        
        static_assert(sizeof(source2sdk::server::dynpitchvol_base_t) == 0x_);
    };
};
